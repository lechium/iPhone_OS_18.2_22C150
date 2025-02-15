//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, STLocationStatusDomainLocationAttribution;

@interface CLAttributionRecord : NSObject
{
    int _serviceTypeAttributionCounts[21];	// 8 = 0x8
    int _totalAttributionCount;	// 92 = 0x5c
    STLocationStatusDomainLocationAttribution *_attributionIdentifier;	// 96 = 0x60
    CLTimer *_attributionTimer;	// 104 = 0x68
}

@property(retain, nonatomic) CLTimer *attributionTimer; // @synthesize attributionTimer=_attributionTimer;
@property(retain, nonatomic) STLocationStatusDomainLocationAttribution *attributionIdentifier; // @synthesize attributionIdentifier=_attributionIdentifier;
@property(readonly, nonatomic) int totalAttributionCount; // @synthesize totalAttributionCount=_totalAttributionCount;
- (id)description;	// IMP=0x0010000000b995c7
- (void)decrementAttributionCountForServiceType:(unsigned long long)arg1;	// IMP=0x0010000000b99447
- (void)incrementAttributionCountForServiceType:(unsigned long long)arg1;	// IMP=0x0010000000b9943a
- (void)dealloc;	// IMP=0x0010000000b993c9
- (id)initWithAttributionId:(id)arg1 andTimer:(id)arg2;	// IMP=0x0010000000b99354

@end

