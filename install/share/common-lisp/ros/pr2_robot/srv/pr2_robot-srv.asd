
(cl:in-package :asdf)

(defsystem "pr2_robot-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "GetFloatArrayFeature" :depends-on ("_package_GetFloatArrayFeature"))
    (:file "_package_GetFloatArrayFeature" :depends-on ("_package"))
    (:file "GetNormals" :depends-on ("_package_GetNormals"))
    (:file "_package_GetNormals" :depends-on ("_package"))
    (:file "Grasp" :depends-on ("_package_Grasp"))
    (:file "_package_Grasp" :depends-on ("_package"))
    (:file "PickPlace" :depends-on ("_package_PickPlace"))
    (:file "_package_PickPlace" :depends-on ("_package"))
  ))