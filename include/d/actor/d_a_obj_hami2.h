#ifndef D_A_OBJ_HAMI2_H
#define D_A_OBJ_HAMI2_H

#include "d/d_bg_s_movebg_actor.h"

namespace daObjHami2 {
    class Act_c : public dBgS_MoveBgActor {
    public:
        void prm_get_swSave() const {}
    
        virtual BOOL CreateHeap();
        virtual BOOL Create();
        cPhs_State Mthd_Create();
        virtual BOOL Delete();
        BOOL Mthd_Delete();
        void set_mtx();
        void init_mtx();
        void daObjHami2_close_stop();
        void daObjHami2_open_demo_wait();
        void daObjHami2_open_demo();
        void daObjHami2_open_stop();
        void daObjHami2_close_demo_wait();
        void daObjHami2_close_demo();
        virtual BOOL Execute(Mtx**);
        virtual BOOL Draw();
    
        static Mtx M_tmp_mtx;
    public:
        /* 0x2c8 */ s16  field_0x2c8;
        /* FIXME 0x2ca -- 0x2cb */
        /* 0x2cc */ request_of_phase_process_class field_0x2cc;
        /* 0x2d4 */ J3DModel* mpModel;
        /* 0x2d8 */ dBgW* field_0x2d8;
        /* 0x2dc */ Mtx field_0x2dc;
        /* 0x30c */ int field_0x30c;
        /* 0x310 */ s16 field_0x310;
        /* 0x312 */ s16 field_312;
    };  // Size: 0x314
};

#endif /* D_A_OBJ_HAMI2_H */
