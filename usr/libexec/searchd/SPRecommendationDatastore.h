//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPRecommendationDatastore : NSObject
{
}

@property(readonly, nonatomic) unsigned int domain;
- (id)performQuery:(id)arg1;	// IMP=0x0010000000004e0d
- (_Bool)coolDown;	// IMP=0x0010000000004e05
- (void)preheat;	// IMP=0x0010000000004dff
- (void)deactivate;	// IMP=0x0010000000004df9
- (void)activate;	// IMP=0x0010000000004df3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

