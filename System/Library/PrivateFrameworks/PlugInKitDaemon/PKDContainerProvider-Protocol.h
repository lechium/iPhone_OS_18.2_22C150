//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKitDaemon/NSObject-Protocol.h>

@protocol PKDContainerProvider <NSObject>
- (char *)create_or_lookup_path_for_current_user:(unsigned long long)arg1 identifier:(const char *)arg2 create_if_necessary:(_Bool)arg3 transient:(_Bool)arg4 out_existed:(_Bool *)arg5 out_error:(unsigned long long *)arg6;
@end
