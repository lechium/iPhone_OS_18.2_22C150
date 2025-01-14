//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXComposeRecipientView, PXRecipient;

@protocol PXComposeRecipientViewDelegate <NSObject>

@optional
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didRemoveRecipient:(PXRecipient *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didAddRecipient:(PXRecipient *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 disambiguateRecipient:(PXRecipient *)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(PXComposeRecipientView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(PXComposeRecipientView *)arg1;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(PXComposeRecipientView *)arg1 textDidChange:(NSString *)arg2;
@end

