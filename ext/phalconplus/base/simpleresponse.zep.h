
extern zend_class_entry *phalconplus_base_simpleresponse_ce;

ZEPHIR_INIT_CLASS(PhalconPlus_Base_SimpleResponse);

PHP_METHOD(PhalconPlus_Base_SimpleResponse, getResult);
PHP_METHOD(PhalconPlus_Base_SimpleResponse, setResult);
PHP_METHOD(PhalconPlus_Base_SimpleResponse, pushItem);
PHP_METHOD(PhalconPlus_Base_SimpleResponse, popItem);
static zend_object_value zephir_init_properties_PhalconPlus_Base_SimpleResponse(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalconplus_base_simpleresponse_setresult, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, result, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalconplus_base_simpleresponse_pushitem, 0, 0, 1)
	ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalconplus_base_simpleresponse_method_entry) {
	PHP_ME(PhalconPlus_Base_SimpleResponse, getResult, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(PhalconPlus_Base_SimpleResponse, setResult, arginfo_phalconplus_base_simpleresponse_setresult, ZEND_ACC_PUBLIC)
	PHP_ME(PhalconPlus_Base_SimpleResponse, pushItem, arginfo_phalconplus_base_simpleresponse_pushitem, ZEND_ACC_PUBLIC)
	PHP_ME(PhalconPlus_Base_SimpleResponse, popItem, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
