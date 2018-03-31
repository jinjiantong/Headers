//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQRichPTVFaceDetector;

@interface SpriteEngineManager : NSObject
{
    _Bool _isYTSDKExists;
    QQRichPTVFaceDetector *_ptvFaceDetector;
}

+ (id)spriteDir:(id)arg1;
+ (id)gCmShowCmdEventDict;
+ (id)getInstance;
- (void)setGameScreenMode:(int)arg1 context:(void *)arg2;
- (id)getPostEstModelPath;
- (id)getYTModelPath;
- (id)getUFAPath;
- (id)YTSDKIsExists;
- (void)showKeyBoardEditor;
- (void)openWebview:(id)arg1;
- (void)log:(int)arg1 code:(int)arg2 info1:(id)arg3 info2:(id)arg4 info3:(id)arg5;
- (void)reportDataBySSOWithDataStr:(id)arg1;
- (void)reportEventWithDataStr:(id)arg1;
- (void)reportFlowWithDataStr:(id)arg1;
- (void)sendHttpRequest:(id)arg1 methodStr:(id)arg2 postStr:(id)arg3 cookieStr:(id)arg4 refererStr:(id)arg5 headerDict:(id)arg6 needBodyCompatible:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (void)sendSSOWithCmd:(id)arg1 dataChar:(id)arg2 context:(void *)arg3;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)sendCmdByEngine:(id)arg1 dataChar:(id)arg2 context:(void *)arg3;
- (id)actionBasePath;
- (id)gameSandBoxPath;
- (id)gameBasePath;
- (id)basePath;
- (id)decodeSharpPData:(id *)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3 error:(id *)arg4;
- (_Bool)isSharpPData:(id)arg1;
- (id)syncSendLocalSSOReqWithJSContext:(void *)arg1 cmd:(id)arg2 jsonStr:(id)arg3;
- (void)asyncGetAvatarByOpenID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncGetNickNameByOpenID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nicknameWithUin:(id)arg1 aioType:(int)arg2 sessionID:(id)arg3;
- (id)gameST;
- (id)gameSTKey;
- (id)hexStringToBytes:(id)arg1;
- (id)decryptData:(id)arg1 key:(id)arg2;
- (id)encryptData:(id)arg1 key:(id)arg2;
- (id)musicSwitch;

@end

