//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDFraudReportODIAssessmentProvider : NSObject
{
}

- (void)provideFeedbackWithOutcome:(unsigned long long)arg1;	// IMP=0x002000000001fd63
- (void)assessmentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001fd5d
- (id)initWithError:(id *)arg1;	// IMP=0x001000000001fd11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
