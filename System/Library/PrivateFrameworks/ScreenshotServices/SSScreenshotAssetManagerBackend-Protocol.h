//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenshotServices/NSObject-Protocol.h>

@class NSData, NSString, SSScreenshotAssetManagerRegistrationOptions, UIImage;

@protocol SSScreenshotAssetManagerBackend <NSObject>
- (void)removeEntryWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)saveImageToTemporaryLocation:(UIImage *)arg1 withName:(NSString *)arg2 imageDescription:(NSString *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (void)updateImageData:(NSData *)arg1 withModificationData:(NSData *)arg2 forEntryWithIdentifier:(NSString *)arg3 registrationOptions:(SSScreenshotAssetManagerRegistrationOptions *)arg4 imageDescription:(NSString *)arg5 completionHandler:(void (^)(_Bool, NSError *))arg6;
- (void)imageForPreviouslyRegisteredIdentifier:(NSString *)arg1 imageHandler:(void (^)(UIImage *, NSError *))arg2;
- (void)registerEntryWithImage:(UIImage *)arg1 options:(SSScreenshotAssetManagerRegistrationOptions *)arg2 identifierHandler:(void (^)(NSString *, NSError *))arg3;
@end

