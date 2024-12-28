//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShazamKit/NSObject-Protocol.h>

@class NSArray, NSError, SHMediaLibrarySnapshot;
@protocol SHMediaLibrarySync;

@protocol SHMediaLibrarySyncDelegate <NSObject>

@optional
- (void)_libraryDidCompleteSync:(id <SHMediaLibrarySync>)arg1;
- (void)_library:(id <SHMediaLibrarySync>)arg1 didProduceError:(NSError *)arg2 failedItemIdentifiers:(NSArray *)arg3;
- (void)_library:(id <SHMediaLibrarySync>)arg1 didChangeWithSnapshot:(SHMediaLibrarySnapshot *)arg2;
- (void)_libraryWillBeginSync:(id <SHMediaLibrarySync>)arg1;
@end
