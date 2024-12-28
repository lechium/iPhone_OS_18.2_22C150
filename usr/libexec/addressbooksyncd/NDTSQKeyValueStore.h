//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NDTSQKeyValueStore
{
    NSString *_insert;	// 8 = 0x8
    NSString *_exchange;	// 16 = 0x10
    NSString *_select;	// 24 = 0x18
    NSString *_delete;	// 32 = 0x20
    NSString *_baseName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000002688
- (void)deleteValueForKey:(id)arg1;	// IMP=0x0010000000002590
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000002452
- (id)getDataForKey:(id)arg1 default:(id)arg2;	// IMP=0x0010000000002289
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000002105
- (id)getStringForKey:(id)arg1 default:(id)arg2;	// IMP=0x0010000000001f17
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0010000000001df1
- (double)getDoubleForKey:(id)arg1 default:(double)arg2;	// IMP=0x0010000000001c67
- (_Bool)compareAndSwapIntegerValue:(long long)arg1 expectedExistingValue:(long long)arg2 forKey:(id)arg3;	// IMP=0x0010000000001b1a
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00100000000019d9
- (long long)getIntegerForKey:(id)arg1 default:(long long)arg2;	// IMP=0x0010000000001808
- (id)instanceName;	// IMP=0x00100000000017d8
- (void)migrateFrom:(long long)arg1;	// IMP=0x00100000000017d2
- (long long)currentVersion;	// IMP=0x00100000000017c7
- (void)createTables;	// IMP=0x0010000000001760
- (id)initWithName:(id)arg1;	// IMP=0x0010000000001604

@end
