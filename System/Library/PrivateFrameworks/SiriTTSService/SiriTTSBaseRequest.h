//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL, NSUUID;

@interface SiriTTSBaseRequest : NSObject
{
    MISSING_TYPE *requestCreatedTime;	// 8 = 0x8
    MISSING_TYPE *clientBundleId;	// 16 = 0x10
    MISSING_TYPE *accessoryId;	// 76 = 0x4c
    MISSING_TYPE *outputPath;	// 101810309 = 0x6118085
    MISSING_TYPE *sandboxToken;	// 25 = 0x19
    MISSING_TYPE *interactionLinkId;	// 3 = 0x3
    MISSING_TYPE *didReportInstrument;	// 1163157343 = 0x45545f5f
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001c1b8
- (void).cxx_destruct;	// IMP=0x000000000001ce6f
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001cc83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c678
- (id)init;	// IMP=0x000000000001c19e
@property(nonatomic, copy) CDUnknownBlockType didReportInstrument;
@property(nonatomic, copy) NSUUID *interactionLinkId;
@property(nonatomic, copy) NSUUID *logLinkId;
@property(nonatomic, copy) NSString *sandboxToken;
@property(nonatomic, copy) NSURL *outputPath;

@end
