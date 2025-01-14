//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, GEORPPhotoMetadata, NSData, NSDate, NSString, NSURL, UIImage;

@interface UGCPhotoWithMetadata : NSObject
{
    CLLocation *_location;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    long long _sourceType;	// 24 = 0x18
    NSString *_mimeType;	// 32 = 0x20
    _Bool _isSuggestedPhoto;	// 40 = 0x28
    UIImage *_image;	// 48 = 0x30
    NSData *_rawImageData;	// 56 = 0x38
    GEORPPhotoMetadata *_photoMetadata;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000385ac5
@property(nonatomic) _Bool isSuggestedPhoto; // @synthesize isSuggestedPhoto=_isSuggestedPhoto;
@property(readonly, nonatomic) NSData *rawImageData; // @synthesize rawImageData=_rawImageData;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000385954
@property(readonly, nonatomic) _Bool needsToBeDownloaded;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) GEORPPhotoMetadata *photoMetadata; // @synthesize photoMetadata=_photoMetadata;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long photoType;
- (id)initWithImageData:(id)arg1 PHAsset:(id)arg2 sourceType:(long long)arg3;	// IMP=0x0010000000385690
- (id)initWithImageData:(id)arg1 date:(id)arg2 location:(id)arg3 source:(long long)arg4;	// IMP=0x001000000038546f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

