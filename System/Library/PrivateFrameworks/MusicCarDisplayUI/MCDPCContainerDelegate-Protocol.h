//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MCDPCContainer, NSIndexSet;

@protocol MCDPCContainerDelegate <NSObject>

@optional
- (void)containerDidChangeCount:(MCDPCContainer *)arg1;
- (void)containerWillChangeCount:(MCDPCContainer *)arg1;
- (void)container:(MCDPCContainer *)arg1 didInvalidateIndicies:(NSIndexSet *)arg2;
@end

