//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImagePickerController, UIViewController;

@protocol _TtP10ContactsUI37CNWallpaperSuggestionsGalleryDelegate_
- (void)suggestionsGalleryDidRequestPresentationOfPosterEditingViewController:(UIViewController *)arg1;
- (void)suggestionsGalleryDidRequestPresentationOfImagePickerController:(UIImagePickerController *)arg1;
- (void)suggestionsGalleryDidCancel;
- (void)suggestionsGalleryDidFinishWithPosterConfiguration:(id)arg1 posterType:(NSString *)arg2 withGivenName:(NSString *)arg3 familyName:(NSString *)arg4;
- (void)suggestionsGalleryDidSelectSuggestedAvatar:(id)arg1 withGivenName:(NSString *)arg2 familyName:(NSString *)arg3;
- (void)suggestionsGalleryDidSelectAvatarSourceType:(NSString *)arg1 withGivenName:(NSString *)arg2 familyName:(NSString *)arg3;
@end
