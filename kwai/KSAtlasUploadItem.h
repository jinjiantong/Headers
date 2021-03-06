//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUploadItem.h"

@class NSArray, NSString;
@protocol KSAtlasUploadResource;

@interface KSAtlasUploadItem : KSUploadItem
{
    NSArray *_photos;
    id <KSAtlasUploadResource> _atlasMusic;
    NSString *_movieInfoPath;
    unsigned long long _type;
    NSString *_uploadSessionID;
}

@property(retain, nonatomic) NSString *uploadSessionID; // @synthesize uploadSessionID=_uploadSessionID;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain) NSString *movieInfoPath; // @synthesize movieInfoPath=_movieInfoPath;
@property(retain) id <KSAtlasUploadResource> atlasMusic; // @synthesize atlasMusic=_atlasMusic;
@property(retain) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (void)configMovieInfo;
- (unsigned long long)encodeConfigID;
- (id)init;
- (id)createLocalFeedImageAtlas;
- (id)localAlbumPhoto;
@property(retain, nonatomic) NSString *localAlbumWorkspacePath;
- (id)localAlbumFilePath;
- (void)ksStats_resetCompletedLength;
- (unsigned long long)ksStats_completedLength;
- (void)ksStats_resource:(id)arg1 completedWithProgress:(float)arg2;
- (void)ksStats_incrementWithLength:(unsigned long long)arg1;
- (unsigned long long)ksStats_fileLength;
- (id)ksStats_resources;
- (id)createUploader;
- (_Bool)uploadAvailable;

@end

