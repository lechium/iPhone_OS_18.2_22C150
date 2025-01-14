//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UGCDownloadablePhotoInfoComposer : NSObject
{
    NSString *_downloadIdentifier;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    double _timeoutInterval;	// 24 = 0x18
}

+ (id)downloadablePhotoForUGCPhoto:(id)arg1;	// IMP=0x002000000039164f
+ (id)downloadablePhotoForGeoMapItemPhotoInfo:(id)arg1;	// IMP=0x00100000003915bd
- (void).cxx_destruct;	// IMP=0x0020000000391724
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
- (id)initWithIdentifier:(id)arg1 url:(id)arg2 timeoutInterval:(double)arg3;	// IMP=0x0010000000391514

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

