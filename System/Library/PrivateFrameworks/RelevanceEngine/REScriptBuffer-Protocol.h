//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString;

@protocol REScriptBuffer <NSObject>
@property(readonly, nonatomic) unsigned short current;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (NSString *)contentForLine:(unsigned long long)arg1;
- (void)next;
@end
