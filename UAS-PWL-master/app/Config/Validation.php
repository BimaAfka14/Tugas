<?php

namespace Config;

use CodeIgniter\Config\BaseConfig;
use CodeIgniter\Validation\StrictRules\CreditCardRules;
use CodeIgniter\Validation\StrictRules\FileRules;
use CodeIgniter\Validation\StrictRules\FormatRules;
use CodeIgniter\Validation\StrictRules\Rules;

class Validation extends BaseConfig
{
    // --------------------------------------------------------------------
    // Setup
    // --------------------------------------------------------------------

    /**
     * Stores the classes that contain the
     * rules that are available.
     *
     * @var string[]
     */
    public array $ruleSets = [
        Rules::class,
        FormatRules::class,
        FileRules::class,
        CreditCardRules::class,
    ];

    /**
     * Specifies the views that are used to display the
     * errors.
     *
     * @var array<string, string>
     */
    public array $templates = [
        'list'   => 'CodeIgniter\Validation\Views\list',
        'single' => 'CodeIgniter\Validation\Views\single',
    ];

    // --------------------------------------------------------------------
    // Rules
    // --------------------------------------------------------------------
    public $barang = [
        'nama' => [
            'rules' => 'required|min_length[5]',
        ],
        'harga' => [
            'rules' => 'required|integer',
        ],
        'diskon' => [
            'rules' => 'numeric',
        ],
        'jumlah'=>[
            'rules' => 'required|integer',
        ],
    ];
    
    public $barang_errors = [
        'nama' => [
            'required' =>'{field} Harus Diisi<br>',
            'min_length' => '{field} Minimal 5 Karakter<br>',
        ],
        'harga' => [
            'required' => '{field} Harus Diisi<br>',
            'integer' => '{field} Harus Angka<br>'
        ],
        'diskon' => [
            'numeric' => '{field} Harus Angka<br>'
        ],
        'jumlah'=>[
            'required' => '{field} Harus Diisi<br>',
            'integer' => '{field} Harus Angka<br>'
        ],
    ];


    public $user = [
        'username' => [
            'rules' => 'required|min_length[5]',
        ],
        'email' => [
            'rules' => 'required|min_length[5]',
        ],
        'pass' => [
            'rules' => 'required|min_length[5]',
        ],
    ];
    
    public $user_errors = [
        'username' => [
            'required' =>'{field} Harus Diisi<br>',
            'min_length' => '{field} Minimal 5 Karakter<br>',
        ],
        'email' => [
            'required' =>'{field} Harus Diisi<br>',
            'min_length' => '{field} Minimal 5 Karakter<br>',   
        ],
        'pass' => [
            'required' => '{field} Harus Diisi<br>',
            'integer' => '{field} Harus Minimal 5 Karakter <br>'
        ],
    ];
}
