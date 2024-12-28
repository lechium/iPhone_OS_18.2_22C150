//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SHSheetTestingContent-Protocol.h"

@class LPLinkMetadata, NSString, SFAirDropTransferChange, UIActivity;
@protocol SHSheetContentPresenter, SHSheetContentViewModel;

@protocol SHSheetContentView <SHSheetTestingContent>
@property(readonly, nonatomic) long long effectivePresentationStyle;
@property(readonly, nonatomic) LPLinkMetadata *headerMetadata;
@property(nonatomic) __weak id <SHSheetContentPresenter> presenter;
- (void)reloadActivity:(UIActivity *)arg1;
- (void)reloadContent;
- (void)reloadMetadata:(LPLinkMetadata *)arg1;
- (void)stopPulsingActivity:(UIActivity *)arg1;
- (void)startPulsingActivity:(UIActivity *)arg1 localizedTitle:(NSString *)arg2;
- (void)didUpdateAirDropTransferWithChange:(SFAirDropTransferChange *)arg1;
- (void)updateWithViewModel:(id <SHSheetContentViewModel>)arg1;
@end
