//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSDCloudDataFetchResult : NSObject
{
    NSDictionary *_failures;	// 8 = 0x8
    NSDictionary *_results;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000e3f3
@property(readonly, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSDictionary *failures; // @synthesize failures=_failures;
@property(readonly, nonatomic) NSString *hashedDescription;
- (id)initWithResults:(id)arg1 failures:(id)arg2;	// IMP=0x001000000000e223

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
