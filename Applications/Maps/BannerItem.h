//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPCGuidanceStateReply, NSString;

@interface BannerItem : NSObject
{
    NSString *_uniqueId;	// 8 = 0x8
    IPCGuidanceStateReply *_guidanceState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000003ff47b
@property(readonly, copy, nonatomic) IPCGuidanceStateReply *guidanceState; // @synthesize guidanceState=_guidanceState;
- (void)updateFromGuidanceState:(id)arg1;	// IMP=0x00100000003ff3bf
@property(readonly, copy, nonatomic) NSString *uniqueId;
- (id)description;	// IMP=0x00100000003ff370
- (id)initWithGuidanceState:(id)arg1;	// IMP=0x00100000003ff2fd

@end

