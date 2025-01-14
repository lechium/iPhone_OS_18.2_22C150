//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNModelFilesCache : NSObject
{
    struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> m_impl;	// 8 = 0x8
}

+ (_Bool)useFOpenForModelWithPath:(id)arg1;	// IMP=0x00600000003648c8
+ (id)sharedInstance;	// IMP=0x0060000000364898
- (id).cxx_construct;	// IMP=0x000000000036448c
- (void).cxx_destruct;	// IMP=0x000000000036447c
- (void)purgeAll;	// IMP=0x0000000000364420
- (void)unload:(id)arg1;	// IMP=0x000000000036434a
- (id)load:(id)arg1;	// IMP=0x00000000003638a2
- (id)init;	// IMP=0x00000000003637ee

@end

