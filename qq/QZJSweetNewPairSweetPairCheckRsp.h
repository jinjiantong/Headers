//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/JceObjectV2.h>

@class QZJSweetNewBaseSweetReqComm, QZJSweetNewBaseSweetRspComm;

@interface QZJSweetNewPairSweetPairCheckRsp : JceObjectV2
{
    QZJSweetNewBaseSweetRspComm *_jcev2_p_0_r_rsp_comm;
    QZJSweetNewBaseSweetReqComm *_jcev2_p_1_o_req_comm;
    long long _jcev2_p_2_o_host_state;
}

+ (id)jceType;
@property(nonatomic, getter=jce_host_state, setter=setJce_host_state:) long long jcev2_p_2_o_host_state; // @synthesize jcev2_p_2_o_host_state=_jcev2_p_2_o_host_state;
@property(retain, nonatomic, getter=jce_req_comm, setter=setJce_req_comm:) QZJSweetNewBaseSweetReqComm *jcev2_p_1_o_req_comm; // @synthesize jcev2_p_1_o_req_comm=_jcev2_p_1_o_req_comm;
@property(retain, nonatomic, getter=jce_rsp_comm, setter=setJce_rsp_comm:) QZJSweetNewBaseSweetRspComm *jcev2_p_0_r_rsp_comm; // @synthesize jcev2_p_0_r_rsp_comm=_jcev2_p_0_r_rsp_comm;
- (void).cxx_destruct;
- (id)init;

@end

