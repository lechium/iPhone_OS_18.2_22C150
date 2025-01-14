//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSValue;

@protocol QLWebKitThumbnailGenerator <NSObject>
- (void)thumbnailForPage:(long long)arg1 size:(NSValue *)arg2 withCompletionBlock:(void (^)(UIImage *))arg3;
- (void)thumbnailInformationWithCompletionBlock:(void (^)(long long, double, double))arg1;
@end

