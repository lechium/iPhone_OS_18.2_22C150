//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SWCDatabase, SWCDownloader;

@interface SWCDownloadScheduler : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    SWCDownloader *_downloader;	// 16 = 0x10
    SWCDatabase *_database;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00400000000165bd
- (void).cxx_destruct;	// IMP=0x0020000000016674
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly) SWCDatabase *database; // @synthesize database=_database;
@property(readonly) SWCDownloader *downloader; // @synthesize downloader=_downloader;
- (void)update;	// IMP=0x00100000000165eb
- (id)init;	// IMP=0x00100000000165c6
- (id)initWithDownloader:(id)arg1 database:(id)arg2;	// IMP=0x0010000000016501
- (void)_performUpdatesWithTransaction:(id)arg1;	// IMP=0x0010000000016f72
- (id)_updateableEntries;	// IMP=0x0010000000016c0f
- (void)_performUpdateWithActivity:(id)arg1;	// IMP=0x0010000000016873
- (void)_scheduleUpdateTimer;	// IMP=0x0010000000016705
- (id)_init;	// IMP=0x001000000001669c

@end

