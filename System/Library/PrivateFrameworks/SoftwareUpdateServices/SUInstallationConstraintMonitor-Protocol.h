//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SUInstallationConstraintMonitorDelegate;

@protocol SUInstallationConstraintMonitor
@property(readonly, nonatomic) unsigned long long unsatisfiedConstraints;
@property(readonly, nonatomic) unsigned long long representedConstraints;
@property(nonatomic) id <SUInstallationConstraintMonitorDelegate> delegate;
- (unsigned long long)unsatisfiedConstraintsWithIgnorableConstraints:(unsigned long long)arg1;
- (_Bool)isSatisfied;
@end

