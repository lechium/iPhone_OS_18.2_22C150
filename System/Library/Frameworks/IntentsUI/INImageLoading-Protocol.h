//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsUI/INImageServing-Protocol.h>

@class INImage, INPortableImageLoader;

@protocol INImageLoading <INImageServing>
- (void)filePathForImage:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (void)loadDataImageFromImage:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 scaledSize:(CDStruct_c3b9c2ee)arg3 completion:(void (^)(INImage *, NSError *))arg4;
- (_Bool)canLoadImageDataForImage:(INImage *)arg1;
@end

