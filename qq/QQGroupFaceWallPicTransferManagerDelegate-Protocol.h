//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, QQGroupFaceWallPicTransferManager;

@protocol QQGroupFaceWallPicTransferManagerDelegate <NSObject>

@optional
- (void)FaceWallPicTranferonFinishFileUpload:(QQGroupFaceWallPicTransferManager *)arg1 imagetag:(long long)arg2 info:(NSDictionary *)arg3;
- (void)FaceWallPicTranferFileUploadProcess:(QQGroupFaceWallPicTransferManager *)arg1 imagetag:(long long)arg2 process:(double)arg3;
- (void)FaceWallPicTranferOnstartFileUpload:(QQGroupFaceWallPicTransferManager *)arg1 imagetag:(long long)arg2;
@end
