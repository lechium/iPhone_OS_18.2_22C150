//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, PKAccountReport;

@interface PDAccountManagerAccountReportRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    PKAccountReport *_report;	// 24 = 0x18
    unsigned long long _trigger;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000527198
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) unsigned long long trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) PKAccountReport *report; // @synthesize report=_report;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithError:(id)arg1;	// IMP=0x0010000000526ef9
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000526eb9
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x0010000000526dc0
- (id)requestIdentifier;	// IMP=0x0010000000526d46
- (unsigned long long)requestType;	// IMP=0x0010000000526d3b
- (id)initWithAccountIdentifier:(id)arg1 report:(id)arg2 trigger:(unsigned long long)arg3;	// IMP=0x0010000000526c78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

