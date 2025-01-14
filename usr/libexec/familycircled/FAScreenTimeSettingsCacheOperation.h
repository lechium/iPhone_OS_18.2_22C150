//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface FAScreenTimeSettingsCacheOperation : NSObject
{
    NSNumber *_dsid;	// 8 = 0x8
}

+ (id)cacheQueue;	// IMP=0x0040000000008bd0
- (void).cxx_destruct;	// IMP=0x0020000000009dd5
@property(retain, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
- (id)_onQueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009ba0
- (id)_createCacheFile;	// IMP=0x001000000000991f
- (id)_cacheURL;	// IMP=0x001000000000982b
- (id)_fetchData:(id *)arg1;	// IMP=0x00100000000095ba
- (id)_cacheURLWithError:(id *)arg1;	// IMP=0x0010000000009388
- (id)invalidate;	// IMP=0x0010000000009173
- (id)loadScreenTimeSettingsObject;	// IMP=0x0010000000008eed
- (id)cacheScreenTimeSettingsObject:(id)arg1;	// IMP=0x0010000000008c51
- (id)initWithDSID:(id)arg1;	// IMP=0x0010000000008b65

@end

