//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSDate, PUAssetDisplayDescriptor;

@protocol PUAssetDisplayDescriptorNavigator <NSObject>
- (void)navigateToAssetDisplayDescriptor:(PUAssetDisplayDescriptor *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end

