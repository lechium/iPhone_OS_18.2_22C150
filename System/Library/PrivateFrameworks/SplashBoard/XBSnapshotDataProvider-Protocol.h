//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SplashBoard/NSObject-Protocol.h>

@class NSData, UIImage, XBSnapshotDataProviderContext;
@protocol XBSnapshotDataProvider;

@protocol XBSnapshotDataProvider <NSObject>
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;

@optional
- (void)invalidateImage;
- (_Bool)hasProtectedContent;
- (id <XBSnapshotDataProvider>)fallbackSnapshotDataProvider;
- (NSData *)fetchImageData:(out struct CGAffineTransform *)arg1;
- (UIImage *)fetchImage;
- (UIImage *)fetchImageForFormat:(long long)arg1;
@end

