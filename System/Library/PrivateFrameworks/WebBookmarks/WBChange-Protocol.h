//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebBookmarks/NSObject-Protocol.h>
#import <WebBookmarks/NSSecureCoding-Protocol.h>
#import <WebBookmarks/WBSerializable-Protocol.h>

@protocol WBChange <NSObject, NSSecureCoding, WBSerializable>
@property(readonly, nonatomic) _Bool shouldSync;
@property(readonly, nonatomic) long long changeType;
- (void)updateChangeAfterUpdatingInMemoryID:(int)arg1 withDatabaseID:(int)arg2;
@end
