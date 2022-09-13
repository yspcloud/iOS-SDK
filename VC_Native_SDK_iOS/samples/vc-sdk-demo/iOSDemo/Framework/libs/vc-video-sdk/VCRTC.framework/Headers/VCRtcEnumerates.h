#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, VCRtcErrorCode){
    VCRtcErrorCodeAudioRequestFailure = 1,
    VCRtcErrorCodeVideoRequestFailure = 2,
    VCRtcErrorCodeCheckJoinRequestFailure = 3,
    VCRtcErrorCodeDisconnect ,
    VCRtcErrorCodeSystemNotIdle ,
};

typedef NS_ENUM(NSUInteger, VCSystemState) {
    VCSystemStateIdle,
    VCSystemStateConnected
};

typedef NS_ENUM(NSUInteger, VCCallState) {
    VCCallStateIdle,
    VCCallStateConnected
};

//音视频质量
typedef NS_ENUM(NSInteger, VCVideoProfile){
    VCVideoProfileNone = 0,//不限制
    VCVideoProfile720P,//1280x720
    VCVideoProfile540P,//960x540
    VCVideoProfile480P,//640x480
    VCVideoProfile360P,//640x360
    VCVideoProfile180P,//320x180
    VCVideoProfileCustom // 自定义
};

// 会议类型
typedef NS_ENUM(NSInteger, VCConnectType) {
    VCConnectTypeMeeting,//音视频会议
    VCConnectTypeUser,//点对点间呼叫
    VCConnectTypeOnlyManager,//仅管理会议
    VCConnectTypeHideMe,//隐身入会 (观看会议，并不参见会议)
    VCConnectTypeContentShare // 内容共享入会
};

typedef NS_ENUM(NSUInteger, VCConferenceType) {
    VCConferenceTypeMeeting,//会议室
    VCConferenceTypeVmr//讲堂
};

// 音视频开启接收
typedef NS_ENUM(NSInteger, VCCallType ) {
    VCCallTypeSendAndReceive,           // 建立音视频方式入会。
    VCCallTypeOnlySendVideoAndReceive,  // 建立仅视频方式入会,一般用于没有麦克风权限方式入会。
    VCCallTypeOnlySendAudioAndReceive,  // 建立仅音频方式入会,一般用于没有摄像机权限方式入会。
    VCCallTypeOnlySend,                 // 建立仅发送音视频，并不接收。
    VCCallTypeOnlySendVideo,            // 建立仅发送视频，并不接收。
    VCCallTypeOnlySendAudio,            // 建立仅发送音频，并不接收。
    VCCallTypeOnlyReceive,              // 建立仅接收远端音视频方式入会。
    VCCallTypeNone                      // 不建立音视频入会。 (暂时可用在 仅会议管理管理功能)
};

// 视频发送、接收的方式
typedef NS_ENUM(NSInteger, VCVideoSRType ) {
    VCVideoSRTypeNormor,//全编全解
    VCVideoSRTypeSimulcast//转发
} ;

typedef NS_ENUM(NSInteger, VCServerRegister ) {
    VCServerRegisterSuccssed, // 获取当前地址下的信息成功
    VCServerRegisterFailure   // 当前服务器地址不可用
} ;

typedef NS_ENUM(NSInteger, VCForScreenFaildType ) {
    VCForScreenFaildTypeNetwork,  // 网络失败
    VCForScreenFaildTypeNotFound, // 匹配码不存在
    VCForScreenFaildTypeOther // 造成连接失败的其他原因
} ;

typedef NS_ENUM(NSInteger,VCForScreenType ) {
    VCForScreenTypeRecord,
    VCForScreenTypePhoto
};

typedef NS_ENUM(NSInteger,VCForScreenStatus ) {
    VCForScreenStatusWait,
    VCForScreenStatusOpen,
    VCForScreenStatusClose,
    VCForScreenStatusError,
    VCForScreenStatusSharePhoto,
    VCForScreenStatusShareRecord
};

typedef NS_ENUM(NSInteger,VCForScreenDisconnectReason ) {
    // 被投屏端强制断开
    VCForScreenDisconnectReasonByRemote,
    // 本端主动断开
    VCForScreenDisconnectReasonByLocal,
    // 共享源被其他端抢断
    VCForScreenDisconnectReasonCast
};

