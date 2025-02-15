//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTCaptureConfiguration : NSObject
{
    _Bool _enablePresentDownload;	// 8 = 0x8
    _Bool _enableLogErrors;	// 9 = 0x9
    _Bool _disableHashResources;	// 10 = 0xa
    unsigned int _waitEventTimeout;	// 12 = 0xc
    unsigned int _maxDownloadCommandBuffers;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000ca19
@property(nonatomic) unsigned int maxDownloadCommandBuffers; // @synthesize maxDownloadCommandBuffers=_maxDownloadCommandBuffers;
@property(nonatomic) unsigned int waitEventTimeout; // @synthesize waitEventTimeout=_waitEventTimeout;
@property(nonatomic) _Bool disableHashResources; // @synthesize disableHashResources=_disableHashResources;
@property(nonatomic) _Bool enableLogErrors; // @synthesize enableLogErrors=_enableLogErrors;
@property(nonatomic) _Bool enablePresentDownload; // @synthesize enablePresentDownload=_enablePresentDownload;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000cb74
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ca87
- (id)init;	// IMP=0x000000000000ca21

@end

