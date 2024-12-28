//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNPhotoPickerActionsModel, CNPhotoPickerProviderItem, NSIndexPath, UIView;

@protocol CNPhotoPickerActionsDelegate <NSObject>
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didDelete:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3 withSourceView:(UIView *)arg4;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didDuplicate:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3 completionBlock:(void (^)(void))arg4;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didEdit:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didAssignToContact:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
