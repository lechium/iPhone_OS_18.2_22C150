//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookUtility/BUIOChannel-Protocol.h>
#import <BookUtility/BUStreamReadChannel-Protocol.h>

@protocol BUReadChannel <BUIOChannel, BUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

