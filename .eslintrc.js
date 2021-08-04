module.exports = {
  parserOptions: {
    ecmaVersion: '2018',
  },
  rules: {
    'comma-dangle': ['error', {
      arrays: 'always-multiline',
      objects: 'always-multiline',
      imports: 'always-multiline',
      exports: 'always-multiline',
      functions: 'always-multiline',
      },
    ],
    quotes: ['error', 'single', {'avoidEscape': true}],
  },
};
