<?php 

namespace App\Controllers;
use App\Models\UserModel;

class UserController extends BaseController
{
    protected $user;

    function __construct()
    {
        helper('form');
        $this->validation = \Config\Services::validation();
        $this->user = new UserModel();
    }

    public function index()
    {
        $data['users'] = $this->user->findAll();
        return view('pages/user_view', $data);
    }

    public function create()
			{
				$data = $this->request->getPost();
				$validate = $this->validation->run($data, 'user');
				$errors = $this->validation->getErrors();

				if(!$errors){
					$dataForm = [ 
						'username' => $this->request->getPost('username'),
                        'email' => $this->request->getPost('email'),
						'password' => md5($this->request->getPost('pass')),
						'role' => "user",
					];  
			
					$this->user->insert($dataForm); 
			
					return redirect('user')->with('success','Data Berhasil Ditambah');
				}else{
					return redirect('user')->with('failed',implode("<br>",$errors));
				}    
			}

    public function edit($id)
    {
        $dataForm = [
            'email' => $this->request->getPost('email'),
            'username' => $this->request->getPost('username'),
            'role' => $this->request->getPost('role'),
            'is_aktif' => $this->request->getPost('is_aktif')
        ];

        $this->user->update($id, $dataForm); 
    
        return redirect('user')->with('success','Data Berhasil Diubah');
    }
    

    public function delete($id)
    {
        $this->user->delete($id);
        return redirect('user')->with('success','Data Berhasil Dihapus');
    }
}