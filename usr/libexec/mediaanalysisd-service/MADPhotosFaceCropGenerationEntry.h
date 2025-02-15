//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSURL, PHAsset, PHAssetResource;

@interface MADPhotosFaceCropGenerationEntry : NSObject
{
    int _status;	// 8 = 0x8
    PHAsset *_asset;	// 16 = 0x10
    NSMutableSet *_faces;	// 24 = 0x18
    PHAssetResource *_resource;	// 32 = 0x20
    NSURL *_downloadURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c9600
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) PHAssetResource *resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) NSMutableSet *faces; // @synthesize faces=_faces;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (id)initWithAsset:(id)arg1 andFace:(id)arg2;	// IMP=0x00100000000c94ea

@end

