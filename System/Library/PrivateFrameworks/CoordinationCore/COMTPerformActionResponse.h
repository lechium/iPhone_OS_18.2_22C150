//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Coordination/COMessageChannelResponse.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface COMTPerformActionResponse : COMessageChannelResponse
{
    NSDictionary *_results;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000008661c
- (void).cxx_destruct;	// IMP=0x0000000000086635
@property(readonly, copy, nonatomic) NSDictionary *results; // @synthesize results=_results;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086581
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000863f8
- (id)initWithResults:(id)arg1;	// IMP=0x000000000008637e

@end
