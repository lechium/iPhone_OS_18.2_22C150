//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUSurveyQuestionsWelcomeViewController : OBWelcomeController
{
    CDUnknownBlockType __completionHandler;	// 8 = 0x8
}

+ (void)resetLastPresentationInfo;	// IMP=0x001000000064cc69
+ (void)presentIfNecessaryFromViewController:(id)arg1 presentationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000064cb6e
- (void).cxx_destruct;	// IMP=0x000000000064ca80
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
- (void)_handleContinueButton:(id)arg1;	// IMP=0x000000000064ca45
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000064c998
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000064c776

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

