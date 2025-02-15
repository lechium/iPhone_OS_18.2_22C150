//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKObscurableBalloonView, NSDictionary;

@protocol CKObscurableBalloonViewDelegate <NSObject>
- (_Bool)isReportingEnabled;
- (_Bool)isRevealingContentEnabled;
- (void)didTapWaysToGetHelp;
- (void)didTapBlockContact;

@optional
- (void)evidenceToReportWithContext:(NSDictionary *)arg1 balloonView:(CKObscurableBalloonView *)arg2 completionHandler:(void (^)(SCUIReportEvidence *, NSError *))arg3;
- (void)presentGetHelpAlert;
@end

