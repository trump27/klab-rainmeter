[Variables]
BackgroundColor=0,0,0,182
FontFace=Trebuchet MS
;FontFace=Calibri
FontSize=8
FontColor=232,232,232,255
Width=200
;Line chart style
LineGreen=StyleLineBase | StyleLineGreen
LineBlue=StyleLineBase | StyleLineBlue
LineRed=StyleLineBase | StyleLineRed
LineYellow=StyleLineBase | StyleLineYellow
;Bar chart style
BarGreen=StyleBarBase | StyleBarGreen
BarBlue=StyleBarBase | StyleBarBlue
BarRed=StyleBarBase | StyleBarRed
BarYellow=StyleBarBase | StyleBarYellow


;;---------------
;; Title style
;;---------------

[StyleTitle]
;StringAlign=CenterCenter
StringAlign=Right
StringStyle=Bold
FontFace=#FontFace#
FontColor=180,232,232,200
FontSize=10
;Angle=(Rad(270))
AntiAlias=1
AutoScale=1
X=(#Width#-5)
Y=0
H=20
W=#Width#

;;---------------
;; Text style
;;---------------

[StyleText]
FontFace=#FontFace#
FontColor=#FontColor#
FontSize=#FontSize#
AntiAlias=1
AutoScale=1

;;---------------
;; Line style
;;---------------

[StyleLineBase]
LineColor=0,163,255
SolidColor=0,163,255,50
Scales=100
AntiAlias=1
X=5
Y=0R
W=(#Width#-10)
H=25

; Blue
[StyleLineBlue]
LineColor=0,163,255
SolidColor=0,163,255,50


; Green
[StyleLineGreen]
LineColor=0,153,51
SolidColor=0,153,51,50


; Red
[StyleLineRed]
LineColor=153,51,0
SolidColor=153,51,0,50

; Yellow
[StyleLineYellow]
LineColor=248,229,78
SolidColor=248,229,78,50

;;---------------
;; Bar style
;;---------------
[StyleBarBase]
BarOrientation=HORIZONTAL
BarColor=0,153,51
SolidColor=0,153,51,50
AntiAlias=1
X=5
Y=2R
W=(#Width#-10)
H=5

[StyleBarBlue]
BarColor=0,163,255
SolidColor=0,163,255,50

; Green
[StyleBarGreen]
BarColor=0,153,51
SolidColor=0,153,51,50

; Red
[StyleBarRed]
BarColor=153,51,0
SolidColor=153,51,0,50

; Yellow
[StyleBarYellow]
BarColor=248,229,78
SolidColor=248,229,78,50
