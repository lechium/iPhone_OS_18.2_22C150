//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKAMPController;

@interface GKContactsIntegrationMetricsHandler : NSObject
{
    GKAMPController *_ampController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e3177
@property(retain, nonatomic) GKAMPController *ampController; // @synthesize ampController=_ampController;
- (void)recordContactRelationshipsFromResults:(id)arg1;	// IMP=0x00100000000e2eb5
- (void)recordContactInfoMatchCount:(unsigned long long)arg1;	// IMP=0x00100000000e2dab
- (id)initWithAMPController:(id)arg1;	// IMP=0x00100000000e2d40
- (id)init;	// IMP=0x00100000000e2ce6

@end
