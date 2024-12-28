//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;
@protocol ICSAppendable;

@protocol ICSWriting
@property(readonly, nonatomic) NSSet *propertiesToExcludeForChecksum;
- (NSSet *)propertiesToHide;
- (_Bool)shouldObscureValue;
- (_Bool)shouldObscureParameter:(NSString *)arg1;
- (NSSet *)propertiesToObscure;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id <ICSAppendable>)arg2;
- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
@end
