//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, UIImage;
@protocol RAPUserDirectionRequest;

@interface RAPDirectionInstructionsIncorrectQuestion
{
    NSMutableArray *_incorrectInstructions;	// 8 = 0x8
    id <RAPUserDirectionRequest> _selectedValue;	// 16 = 0x10
    CDStruct_02837cd9 _routeStepMapRect;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b1af99
@property(readonly, nonatomic) CDStruct_02837cd9 routeStepMapRect; // @synthesize routeStepMapRect=_routeStepMapRect;
@property(readonly, nonatomic) id <RAPUserDirectionRequest> selectedValue; // @synthesize selectedValue=_selectedValue;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x0010000000b1ac92
- (_Bool)hasCorrectionForRouteStep:(id)arg1 transitListItem:(id)arg2;	// IMP=0x0010000000b1ac5f
- (_Bool)isComplete;	// IMP=0x0010000000b1ac32
- (void)saveCorrection:(id)arg1;	// IMP=0x0010000000b1aaf2
- (id)_correctionforComposedRouteStep:(id)arg1 listItem:(id)arg2;	// IMP=0x0010000000b1a8e3
- (id)instructionCorrectionQuestionForStep:(id)arg1 listItem:(id)arg2;	// IMP=0x0010000000b1a811
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 direction:(id)arg3;	// IMP=0x0010000000b1a78f
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(readonly) Class superclass;

@end
