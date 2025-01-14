//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, VUIMediaLibraryManager;
@protocol VUIHomeShareMediaLibraryManagerDelegate;

@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property(nonatomic) __weak id <VUIHomeShareMediaLibraryManagerDelegate> delegate;
- (void)endDiscoveringMediaLibraries;
- (void)beginDiscoveringMediaLibraries;
- (id)initWithManager:(VUIMediaLibraryManager *)arg1;
@end

