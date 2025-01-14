//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/CRCommandHandling-Protocol.h>
#import <CardKit/CRFeedbackListener-Protocol.h>

@class CRBeganEditingCommand, CRFinishedEditingCommand, CRInvocationPayloadCommand, CRKCardSectionViewController, CRNextCardCommand, CRPunchoutCommand, CRRequestUserConfirmationCommand, INIntent, UIViewController;
@protocol CRCard, CRKCardSectionViewProviderManaging, CRKCardViewControlling, CRReferentialCommand;

@protocol CRKCardViewControllerDelegate <CRFeedbackListener, CRCommandHandling>

@optional
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestCardSectionViewSourceForCard:(id <CRCard>)arg2 reply:(void (^)(id <CRKCardSectionViewSourcing>, NSError *))arg3;
- (_Bool)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id <CRKCardSectionViewProviderManaging>)arg2;
- (_Bool)performFinishedEditingCommand:(CRFinishedEditingCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performBeganEditingCommand:(CRBeganEditingCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performInvocationPayloadCommand:(CRInvocationPayloadCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performRequestUserConfirmationCommand:(CRRequestUserConfirmationCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (_Bool)performReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (unsigned long long)navigationIndexOfCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (_Bool)canPerformReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (id <CRCard>)baseCardForCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (struct CGSize)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 didFailToLoadCard:(id <CRCard>)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(UIViewController<CRKCardViewControlling> *)arg1;
- (void)cardViewControllerDidLoad:(UIViewController<CRKCardViewControlling> *)arg1;
@end

