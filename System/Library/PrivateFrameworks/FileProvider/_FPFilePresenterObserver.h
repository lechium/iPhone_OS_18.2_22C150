//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderManager;

__attribute__((visibility("hidden")))
@interface _FPFilePresenterObserver : NSObject
{
    NSFileProviderManager *_parentConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011d693
@property __weak NSFileProviderManager *parentConnection; // @synthesize parentConnection=_parentConnection;
- (void)observePresentedFilesDidChange:(id)arg1;	// IMP=0x000000000011d612

@end

