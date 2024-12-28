//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XCTDDiagnosticsProvider : NSObject
{
    NSDictionary *_requestTypeRegistry;	// 8 = 0x8
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x0020000000022413
+ (id)logDirectory;	// IMP=0x00100000000222c0
- (void).cxx_destruct;	// IMP=0x0020000000022950
@property(readonly, copy) NSDictionary *requestTypeRegistry; // @synthesize requestTypeRegistry=_requestTypeRegistry;
- (void)requestTailspinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000228c8
- (void)requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022854
- (void)requestLogArchiveForUser:(unsigned int)arg1 startDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002242f
- (id)init;	// IMP=0x0010000000022347
- (id)initWithRequestTypeRegistry:(id)arg1;	// IMP=0x00100000000222ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
