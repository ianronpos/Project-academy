cmake_minimum_required(VERSION 3.8)
project(my_simulator_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_runtime REQUIRED) #Dependencia que se usa en tiempo de ejecucion para poder usar mensajes personalizados 
find_package(rosidl_default_generators REQUIRED) #Contiene macros para crear mensages personalizados
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

#Genera el codigo fuente necesario para los mensajes perosnalizados
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Comando.msg"
  DEPENDENCIES geometry_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
