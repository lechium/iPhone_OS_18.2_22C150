//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIImage;

@protocol _TtP16CarPlayWallpaper13CPWImageCache_
@property(nonatomic, readonly) NSArray *allImageKeys;
- (void)removeAllImagesWithCompletion:(void (^)(void))arg1;
- (void)removeImageWith:(NSString *)arg1;
- (void)saveWithImage:(UIImage *)arg1 with:(NSString *)arg2 completion:(void (^)(UIImage *))arg3;
- (UIImage *)imageWith:(NSString *)arg1;
@end

